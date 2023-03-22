class CashRegister
    attr_reader :drawer

    def initialize
        @drawer = [2000, 1000, 500, 100,
                    25, 10, 5, 1]
    end
    
    def make_change bill, tendered
        difference = tendered - bill
        change = []
        i = 0
        denomination = @drawer[i]
        while difference > 0 do
            if difference < denomination
                i += 1
                denomination = @drawer[i]
                next
            end
    
            change << denomination
            difference -= denomination
        end

        change
    end
end